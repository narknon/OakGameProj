#pragma once
#include "CoreMinimal.h"
#include "AINodeComponent.h"
#include "EInitialPathAction.h"
#include "SpawnNodeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API USpawnNodeComponent : public UAINodeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInitialPathAction InitialPathAction;
    
    USpawnNodeComponent();
};

