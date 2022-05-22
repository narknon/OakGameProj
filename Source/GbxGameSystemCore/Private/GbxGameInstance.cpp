#include "GbxGameInstance.h"

void UGbxGameInstance::DebugLoadStartupAssets() {
}

UGbxGameInstance::UGbxGameInstance() {
    this->CachedCharacterMassPresets = NULL;
    this->CachedForcePresets = NULL;
    this->CachedSpawnCostPresets = NULL;
    this->CinematicMode = NULL;
    this->ProjectileManager = NULL;
}

