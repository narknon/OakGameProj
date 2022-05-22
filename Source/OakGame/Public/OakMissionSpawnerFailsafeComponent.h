#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "OakMissionSpawnerFailsafeComponent.generated.h"

class UBillboardComponent;
class UArrowComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakMissionSpawnerFailsafeComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(Export)
    UBillboardComponent* SpriteComponent;
    
public:
    UOakMissionSpawnerFailsafeComponent();
};

