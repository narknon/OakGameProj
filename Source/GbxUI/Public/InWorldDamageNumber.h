#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "DamageAnimationPairing.h"
#include "InWorldDamageNumber.generated.h"

class UGbxRichTextBlock;
class AGbxPlayerController;
class UCanvasPanel;
class UUserWidget;
class UWidgetComponent;

UCLASS(EditInlineNew)
class GBXUI_API UInWorldDamageNumber : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxRichTextBlock* DisplayField;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UCanvasPanel* DisplayPanel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDamageAnimationPairing> DamageAnimationPairings;
    
    UPROPERTY(Transient)
    AGbxPlayerController* InstigatingPlayer;
    
    UPROPERTY(Export, Transient)
    UWidgetComponent* DamageNumberContainer;
    
public:
    UInWorldDamageNumber();
    UFUNCTION()
    void OnWentOffscreen();
    
protected:
    UFUNCTION()
    void ImpulseAnimationCompleted(UUserWidget* AssociatedWidget);
    
};

