#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "CameraStatePostProcessBlend.h"
#include "Engine/Scene.h"
#include "CameraState.generated.h"

class UCameraInputs;

UCLASS(BlueprintType)
class GBXCAMERAMODES_API UCameraState : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UCameraInputs* Inputs;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FPOV POV;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float DefaultFOV;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector AbsoluteLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector BaseLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FRotator BaseRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float BaseFOVOffset;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector CameraLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FRotator CameraRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector ViewModelLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FRotator ViewModelRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float ViewModelFOV;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float DefaultViewModelFOV;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float AspectRatio;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    uint8 bConstrainAspectRatio: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bIsTransitioning: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bIsColliding: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bShowViewModel: 1;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    uint8 bDisableSeparateTranslucency: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bUpdatingInitialPitchRotation: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bUpdatingInitialYawRotation: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator ClampedLookRotationRemainder;
    
    UPROPERTY(Transient)
    TArray<FCameraStatePostProcessBlend> PostProcessBlends;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FocusDistance;
    
    UCameraState();
    UFUNCTION(BlueprintCallable)
    void SetViewModelFOV(float NewFOV, bool bDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseRotation(const FRotator& NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseLocation(const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseFOV(float NewFOV, bool bDefault);
    
    UFUNCTION(BlueprintPure)
    FRotator GetBaseRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBaseLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseFOV() const;
    
    UFUNCTION(BlueprintCallable)
    bool CameraTrace(const FVector Start, const FVector End, float Radius, TEnumAsByte<ECollisionChannel> TraceChannel, uint8 IgnoreMask, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable)
    void AddPostProcessBlend(const FPostProcessSettings& Settings, float BlendWeight);
    
};

