#include "WwiseAudioComponentPool.h"

class UWwiseAudioComponent;

UWwiseAudioComponent* UWwiseAudioComponentPool::GetPooledComponent() {
    return NULL;
}

UWwiseAudioComponentPool::UWwiseAudioComponentPool() {
    this->MaxPoolSize = 0;
    this->PoolMode = EWwiseAudioComponentPoolMode::Fixed;
    this->bRecycleComponents = false;
}

