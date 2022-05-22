#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "CameraModesFunctionLibrary.generated.h"

class APlayerController;
class UCameraModeSetData;

UCLASS(BlueprintType)
class GBXCAMERAMODES_API UCameraModesFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCameraModesFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetCameraMode(APlayerController* Controller, FName ModeName, float BlendTimeOverride, bool bTeleport, bool bForceResetMode);
    
    UFUNCTION(BlueprintCallable)
    static void ResetCameraRotation(APlayerController* Controller, const FRotator& NewRotation);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveCameraModeSet(APlayerController* Controller, UCameraModeSetData* ModeSet);
    
    UFUNCTION(BlueprintCallable)
    static void PushCameraMode(APlayerController* Controller, FName ModeName, float BlendTimeOverride, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    static void PopCameraMode(APlayerController* Controller, FName ModeName, float BlendTimeOverride, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyCameraRotation(APlayerController* Controller, const FRotator& DeltaRotation);
    
    UFUNCTION(BlueprintCallable)
    static void AddCameraModeSet(APlayerController* Controller, UCameraModeSetData* ModeSet);
    
};

