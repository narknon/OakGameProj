#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AlphaBlend.h"
#include "Animation/AnimTypes.h"
#include "BoneModComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UBoneModComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseTranslation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> TranslationSpace;
    
    UPROPERTY(EditAnywhere)
    bool bReplaceTranslation;
    
    UPROPERTY(EditAnywhere)
    bool bUseRotation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> RotationSpace;
    
    UPROPERTY(EditAnywhere)
    bool bReplaceRotation;
    
    UPROPERTY(EditAnywhere)
    bool bUseScale;
    
    UPROPERTY(EditAnywhere)
    bool bReplaceScale;
    
    UPROPERTY(EditAnywhere)
    FAlphaBlend Blend;
    
    UPROPERTY(EditAnywhere)
    bool bStartActive;
    
    UBoneModComponent();
};

