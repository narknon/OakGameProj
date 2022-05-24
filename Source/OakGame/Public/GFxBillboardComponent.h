#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GFxBillboardComponent.generated.h"

class UTextureRenderTarget2D;
class UGbxGFxMovie;
class UCurveFloat;
class AGbxPlayerController;
class UMaterialInstanceDynamic;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGFxBillboardComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName TextureParameterName;
    
    UPROPERTY(EditAnywhere)
    bool bShouldBillboard;
    
    UPROPERTY(EditAnywhere)
    int32 CustomTranslucentSortPriority;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContentSize;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DistanceScaleCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DistanceAlphaCurve;
    
    UPROPERTY(Transient)
    AGbxPlayerController* TrackedPlayerController;
    
    UPROPERTY(Transient)
    UGbxGFxMovie* CurrentMovie;
    
    UPROPERTY(Transient)
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DisplayedMaterial;
    
    UPROPERTY(Transient)
    FVector SizeOfPlaneMesh;
    
public:
    UGFxBillboardComponent();
protected:
    UFUNCTION()
    void OnMovieStarted();
    
};

