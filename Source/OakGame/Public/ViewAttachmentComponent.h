#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ViewAttachmentComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UViewAttachmentComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpdateLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpdateRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewPitchScale;
    
    UViewAttachmentComponent();
};

