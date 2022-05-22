#pragma once
#include "CoreMinimal.h"
#include "ManagedWidget.h"
#include "OnlineMessageAnimationWidget.generated.h"

class UWidgetAnimation;
class UImage;
class UGbxRichTextBlock;
class UInputComponent;

UCLASS(EditInlineNew)
class UOnlineMessageAnimationWidget : public UManagedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxRichTextBlock* TitleField;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxRichTextBlock* PlayerNameField;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxRichTextBlock* DescriptionField;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UImage* UserPic;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UImage* SpinnerWidget;
    
    UPROPERTY(Export)
    UInputComponent* OnlineMessageInputComponent;
    
    UPROPERTY(EditAnywhere)
    FName OnSpawnAudioEventName;
    
    UPROPERTY(EditAnywhere)
    FName OnDespawnAudioEventName;
    
private:
    UPROPERTY(Export)
    UWidgetAnimation* SpinnerAnimation;
    
public:
    UOnlineMessageAnimationWidget();
};

