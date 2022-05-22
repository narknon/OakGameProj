#include "SmartObject.h"
#include "SmartObjectComponent.h"
#include "GbxActionComponent.h"

USmartObjectComponent* ASmartObject::GetSmartObjectComponent() {
    return NULL;
}

UGbxActionComponent* ASmartObject::GetGbxActionComponent() {
    return NULL;
}

ASmartObject::ASmartObject() {
    this->SmartObjectComponent = CreateDefaultSubobject<USmartObjectComponent>(TEXT("SmartObjectComponent"));
    this->GbxActionComponent = CreateDefaultSubobject<UGbxActionComponent>(TEXT("GbxActionComponent"));
}

