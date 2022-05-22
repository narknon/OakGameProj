#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GbxBlueprintFunctionLibrariesBPLibrary.generated.h"

class UMaterialInterface;
class AActor;
class ACharacter;
class UObject;

UCLASS(BlueprintType)
class GBXBLUEPRINTFUNCTIONLIBRARIES_API UGbxBlueprintFunctionLibrariesBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxBlueprintFunctionLibrariesBPLibrary();
    UFUNCTION(BlueprintCallable)
    static void SortActorListByDistance(AActor* TargetActor, UPARAM(Ref) TArray<AActor*>& ActorList);
    
    UFUNCTION(BlueprintPure)
    static float SimplexNoise4D(const FVector4& Location);
    
    UFUNCTION(BlueprintPure)
    static float SimplexNoise3D(const FVector& Location);
    
    UFUNCTION(BlueprintPure)
    static float SimplexNoise2D(const FVector2D& Location);
    
    UFUNCTION(BlueprintPure)
    static float SimplexNoise1D(float Location);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceMipLevelsToBeResidentForMaterialArray(const TArray<UMaterialInterface*>& MaterialArray, bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32 CinematicTextureGroups);
    
    UFUNCTION(BlueprintPure)
    static float PerlinNoise2D(FVector2D Location, int32 Octaves, float Persistence, float Amplitude);
    
    UFUNCTION(BlueprintPure)
    static float PerlinNoise1D(float X, int32 Octaves, float Persistence, float Amplitude);
    
    UFUNCTION(BlueprintPure)
    static bool IsWithinRangeAndAngle(const FTransform& Source, AActor* Target, float Range, float Angle);
    
    UFUNCTION(BlueprintPure)
    static bool IsInEditorMode();
    
    UFUNCTION(BlueprintCallable)
    static float GbxBlueprintFunctionLibrariesSampleFunction(float Param);
    
    UFUNCTION(BlueprintPure)
    static float FloatDamp(float Current, float Target, UPARAM(Ref) float& CurrentVelocity, float SmoothDuration, float MaxSpeed, float DeltaTime);
    
    UFUNCTION(BlueprintPure)
    static ACharacter* FindClosestPlayerCharacter(UObject* WorldContextObject, const FVector& RefLocation);
    
    UFUNCTION(BlueprintPure)
    static void FindClosestActor(const TArray<int32>& ActorArray, const FVector& RefLocation, int32& ClosestActor);
    
    UFUNCTION(BlueprintCallable)
    static UObject* EditorLoadAsset(const TSoftObjectPtr<UObject>& Asset);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastRemoteEvent(UObject* WorldContextObject, FName EventName);
    
};

