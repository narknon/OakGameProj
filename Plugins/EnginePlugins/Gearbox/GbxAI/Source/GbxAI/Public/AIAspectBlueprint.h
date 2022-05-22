#pragma once
#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "AIAspectBlueprint.generated.h"

class UAIAspectBlueprint;

UCLASS()
class GBXAI_API UAIAspectBlueprint : public UBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAIAspectBlueprint* ParentBlueprint;
    
    UAIAspectBlueprint();
};

