#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HighlightComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UHighlightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHighlightComponent();
    UFUNCTION(BlueprintCallable)
    void Enable();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
    UFUNCTION(BlueprintCallable)
    void CreateDecalStaticMeshesComponent(UMaterialInstanceDynamic* MaterialInstanceDynamic);
    
};

