#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ZoneMapPOIIconInterface.h"
#include "ZoneMapPOIMeshComponent.generated.h"

class UMaterialInstanceDynamic;
class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UZoneMapPOIMeshComponent : public UStaticMeshComponent, public IZoneMapPOIIconInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MeshRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MeshHeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IconZOffset;
    
    UPROPERTY(EditAnywhere)
    FName MaterialLocationParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialXAxisParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialYAxisParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialZAxisParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialMiniMapActiveParameter;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UMaterialInstanceDynamic* MeshMaterial;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> AssociatedActor;
    
    UZoneMapPOIMeshComponent();
    UFUNCTION(BlueprintNativeEvent)
    void ViewModeChanged();
    
    UFUNCTION(BlueprintCallable)
    void SetupMeshMaterial(UMaterialInstanceDynamic* InMeshMaterial);
    
    
    // Fix for true pure virtual functions not being implemented
};

