
#include "CollaborationOperation.h"

void CollaborationOperation::add(int p_value) {
	count += p_value;
}

void CollaborationOperation::reset() {
	count = 0;
}

int CollaborationOperation::get_total() const {
	return count;
}

/* Callable *CollaborationOperation::get_operation_callable(int p_idx) {
	UndoRedo *undo_redo = undo_redo_editor->get_history_undo_redo(p_idx);
	return;
}*/


void CollaborationOperation::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add", "value"), &CollaborationOperation::add);
	ClassDB::bind_method(D_METHOD("reset"), &CollaborationOperation::reset);
	ClassDB::bind_method(D_METHOD("get_total"), &CollaborationOperation::get_total);
}

UndoRedo *CollaborationOperation::get_history_undo_redo(int p_idx) {
	return undo_redo_editor->get_history_undo_redo(p_idx);
}

CollaborationOperation::CollaborationOperation() {
	count = 0;
	undo_redo_editor = EditorUndoRedoManager::get_singleton();

}
