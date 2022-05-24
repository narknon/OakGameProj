#pragma once
#include "CoreMinimal.h"
#include "GbxPlayerCameraManager.h"
#include "ActiveGbxFeedbackEffect.h"
#include "ActiveTrackedFeedback.h"
#include "PlayerCameraModesManager.generated.h"

class UCameraModesManager;
class AActor;

UCLASS(NonTransient)
class GBXCAMERAMODES_API APlayerCameraModesManager : public AGbxPlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewTargetClippingRadius;
    
protected:
    UPROPERTY(Transient)
    UCameraModesManager* CameraModesManager;
    
    UPROPERTY(Transient)
    AActor* LastViewTarget;
    
    UPROPERTY(Transient)
    int32 ViewTargetFlags;
    
public:
    APlayerCameraModesManager();
    UFUNCTION()
    void UpdateCameraShakeFromGbxFeedback(const FActiveGbxFeedbackEffect& TrackedFeedback);
    
    UFUNCTION()
    void UpdateCameraShakeFromFeedback(FActiveTrackedFeedback& TrackedFeedback);
    
};

