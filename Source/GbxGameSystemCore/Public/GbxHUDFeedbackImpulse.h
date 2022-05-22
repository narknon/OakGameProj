#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxHUDFeedbackImpulse.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxHUDFeedbackImpulse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Springiness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Damping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCircularMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyCameraTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraTranslationWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraRotationWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyOriginWorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OriginWorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OriginWorldSpaceWeight;
    
    UPROPERTY(Transient)
    FName Tag;
    
    FGbxHUDFeedbackImpulse();
};

