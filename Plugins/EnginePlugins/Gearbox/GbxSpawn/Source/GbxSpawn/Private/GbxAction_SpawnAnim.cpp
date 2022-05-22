#include "GbxAction_SpawnAnim.h"

class AActor;

AActor* UGbxAction_SpawnAnim::K2_GetSpawnPoint() const {
    return NULL;
}

UGbxAction_SpawnAnim::UGbxAction_SpawnAnim() {
    this->SpawnPointAction = NULL;
    this->SpawnPointActionStop = NULL;
    this->OverrideMovementMode = MOVE_None;
    this->bOverrideMovementMode = false;
    this->bDisableCollisionOnSpawn = true;
}

