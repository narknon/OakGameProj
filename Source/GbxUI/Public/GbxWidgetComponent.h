#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/WidgetComponent.h"
#include "Components/WidgetComponent.h"
#include "GbxWidgetComponent.generated.h"

class UUserWidget;
class AGbxPlayerController;
class UCurveFloat;
class UBorder;
class USceneComponent;
class UGbxUserWidget;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXUI_API UGbxWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCurveFloat* DistanceScaleCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DistanceAlphaCurve;
    
    UPROPERTY(EditAnywhere, Export)
    UBorder* DistanceAlphaBorder;
    
    UPROPERTY(Transient)
    AGbxPlayerController* TrackedPlayerController;
    
    UPROPERTY(Export, Transient)
    UGbxUserWidget* GbxWidget;
    
public:
    UGbxWidgetComponent();
    UFUNCTION(BlueprintCallable)
    void Setup(const TSubclassOf<UUserWidget>& NewWidgetClass, const AGbxPlayerController* NewTrackedPlayer, USceneComponent* ParentComponent, EWidgetSpace WidgetSpace, int32 NewLayerZOrder, FName CollisionProfile);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceScaleCurve(UCurveFloat* NewDistanceScaleCurve);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceAlphaCurve(UCurveFloat* NewDistanceAlphaCurve);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceAlphaBorder(UBorder* NewDistanceAlphaBorder);
    
};

