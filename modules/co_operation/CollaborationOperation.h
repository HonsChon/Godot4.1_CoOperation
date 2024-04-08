/* CollaborationOperation.h */

#ifndef COLLABORATION_H
#define COLLABORATION_H


#include "core/object/ref_counted.h"
#include "editor/editor_undo_redo_manager.h"

class CollaborationOperation : public RefCounted {
	GDCLASS(CollaborationOperation, RefCounted);

	int count;

protected:
	static void _bind_methods();

private:
	EditorUndoRedoManager * undo_redo_editor;

public:




	void add(int p_value);
	void reset();
	int get_total() const;
	UndoRedo *get_history_undo_redo(int p_idx);
	//Callable *get_operation_callable(int p_idx);
	CollaborationOperation();
};


#endif // COLLABORATION_H
