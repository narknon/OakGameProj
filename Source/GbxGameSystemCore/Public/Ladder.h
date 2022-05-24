#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LadderInterface.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Ladder.generated.h"

class UInstancedStaticMeshComponent;
class UMaterialInterface;
class UStaticMesh;
class UStaticMeshComponent;
class UBoxComponent;

UCLASS()
class GBXGAMESYSTEMCORE_API ALadder : public AActor, public ILadderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EComponentMobility::Type> Mobility;
    
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* SegmentMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UMaterialInterface*> SegmentMeshMaterialOverrides;
    
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* TopMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UMaterialInterface*> TopMeshMaterialOverrides;
    
    UPROPERTY(EditAnywhere)
    float BottomAndTopMeshLDMaxDrawDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 bBottomAndTopMeshNeverDistanceCull: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* BottomMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UMaterialInterface*> BottomMeshMaterialOverrides;
    
    UPROPERTY(EditDefaultsOnly)
    float SegmentSpacing;
    
    UPROPERTY(EditDefaultsOnly)
    FVector SegmentOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float SegmentRotation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector TopOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float TopRotation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector BottomOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float BottomRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float VolumeDepth;
    
    UPROPERTY(EditDefaultsOnly)
    float VolumeWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float VolumeExtraTopHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float VolumeExtraBottomHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float TopVolumeDepth;
    
    UPROPERTY(EditDefaultsOnly)
    FVector VolumeOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float CharacterOffset;
    
    UPROPERTY(EditInstanceOnly)
    int32 NumSegments;
    
    UPROPERTY(EditInstanceOnly)
    uint8 bHideTopMesh: 1;
    
    UPROPERTY(EditInstanceOnly)
    uint8 bHideBottomMesh: 1;
    
    UPROPERTY(Export)
    UInstancedStaticMeshComponent* SegmentMeshComponent;
    
    UPROPERTY(Export)
    UStaticMeshComponent* TopMeshComponent;
    
    UPROPERTY(Export)
    UStaticMeshComponent* BottomMeshComponent;
    
    UPROPERTY(Export)
    UBoxComponent* VolumeBoxComponent;
    
    UPROPERTY(Export)
    UBoxComponent* TopVolumeBoxComponent;
    
public:
    ALadder();
    
    // Fix for true pure virtual functions not being implemented
};

