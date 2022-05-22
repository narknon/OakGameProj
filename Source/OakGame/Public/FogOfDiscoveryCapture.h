#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "OnFogSceneUpdatedDelegateDelegate.h"
#include "FogOfDiscoveryCapture.generated.h"

class UTextureRenderTarget2D;
class UZoneMapData;

UCLASS()
class OAKGAME_API AFogOfDiscoveryCapture : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RunBlueprintLogic;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UTextureRenderTarget2D* OverrideDiscoveryTexture;
    
    UPROPERTY(Transient)
    FOnFogSceneUpdatedDelegate OnFogSceneUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* WorldPositionTexture;
    
    UPROPERTY(BlueprintReadOnly)
    UZoneMapData* CurrentLevelZoneMap;
    
    UPROPERTY(EditInstanceOnly)
    UZoneMapData* PendingLevelZoneMap;
    
    UPROPERTY(Transient)
    FVector2D PendingCaptureSize;
    
    AFogOfDiscoveryCapture();
    UFUNCTION(BlueprintCallable)
    bool SetUpDataForLevel(UZoneMapData* LevelZoneMap, FVector2D& CaptureSize, bool bImmediateLoad);
    
    UFUNCTION(BlueprintNativeEvent)
    bool SetupComponentsForCapture();
    
    UFUNCTION()
    void OnZoneMapMeshDataLoaded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFogLevelLoaded(UZoneMapData* UpdatedZoneMap);
    
    UFUNCTION(BlueprintCallable)
    void FogTextureCreated();
    
    UFUNCTION(BlueprintCallable)
    void CaptureScene();
    
};

