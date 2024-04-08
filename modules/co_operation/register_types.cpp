/* register_types.cpp */

#include "register_types.h"

#include "core/object/class_db.h"
#include "CollaborationOperation.h"

void initialize_co_operation_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	ClassDB::register_class<CollaborationOperation>();
}

void uninitialize_co_operation_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	// Nothing to do here in this example.
}
