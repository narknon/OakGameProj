#include "FirstPersonConfigurationData.h"
#include "GbxSkeletalMeshComponent.h"

AFirstPersonConfigurationData::AFirstPersonConfigurationData() {
    this->bAutoFillComponentVariables = true;
    this->Arms = CreateDefaultSubobject<UGbxSkeletalMeshComponent>(TEXT("Arms"));
}

