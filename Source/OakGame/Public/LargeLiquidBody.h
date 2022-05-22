#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "DamageableInterface.h"
#include "LargeLiquidBodySurfaceSection.h"
#include "Engine/EngineTypes.h"
#include "LargeLiquidBody.generated.h"

class AActor;
class UWwiseAudioComponent;
class ULargeLiquidBodyConfigurationData;
class UMaterialInterface;
class UMaterialParameterCollection;
class UProceduralMeshComponent;
class URegionBalanceStateComponent;
class UElementalInteractionComponent;
class UGbxNavMeshPainterComponent;
class UPrimitiveComponent;

UCLASS()
class ALargeLiquidBody : public AVolume, public IDamageableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ULargeLiquidBodyConfigurationData* LargeLiquidBodyConfiguration;
    
    UPROPERTY(EditAnywhere)
    uint8 bPlayDefaultPuddleAudio: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 UseFloorMesh: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 IsSeaLevelActor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideColor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideOpacity: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideNormalStrength: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideMovementSpeed: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideDepthFade: 1;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* FloorMesh_Material;
    
    UPROPERTY(EditAnywhere)
    float FloorMesh_Offset;
    
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* SeaLevelMaterialParameterCollection;
    
    UPROPERTY(VisibleAnywhere)
    float SeaLevelValue;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ColorHighlights;
    
    UPROPERTY(EditAnywhere)
    float Opacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NormalStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementSpeed;
    
    UPROPERTY(EditAnywhere)
    float DepthFade;
    
    UPROPERTY(Export)
    UWwiseAudioComponent* LiquidAudioComponent;
    
    UPROPERTY(Export)
    UProceduralMeshComponent* LiquidSurfaceMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    URegionBalanceStateComponent* BalanceState;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UElementalInteractionComponent* ElementalInteraction;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGbxNavMeshPainterComponent* PainterComponent;
    
    UPROPERTY()
    TArray<FLargeLiquidBodySurfaceSection> SurfaceSections;
    
public:
    ALargeLiquidBody();
private:
    UFUNCTION()
    void OnEndOverlapSurfaceMesh(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnEndNegateElementalDamage(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnElementalReactionDestroyed(AActor* ElementalReaction);
    
    UFUNCTION()
    void OnBeginOverlapSurfaceMesh(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnBeginNegateElementalDamage(AActor* OverlappedActor, AActor* OtherActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

