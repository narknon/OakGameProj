#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMovie.h"
#include "GFxDisplayNotificationWidgetTextFields.h"
#include "GFxDisplayedNotificationWidget.generated.h"

class UGbxMenuData;
class UGbxTextField;
class AOakHUD;

UCLASS()
class OAKGAME_API UGFxDisplayedNotificationWidget : public UGbxGFxMovie {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGFxDisplayNotificationWidgetTextFields> TextFields;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FText> TextFieldConstantsMap;
    
protected:
    UPROPERTY(EditAnywhere)
    UGbxMenuData* LinkedMenuData;
    
    UPROPERTY(Transient)
    AOakHUD* CachedOakHUD;
    
    UPROPERTY(Transient)
    UGbxTextField* HintTextBox;
    
    UPROPERTY(EditAnywhere)
    FString MenuName;
    
    UPROPERTY(EditAnywhere)
    FString HintTextID;
    
public:
    UGFxDisplayedNotificationWidget();
    UFUNCTION()
    void OnHideComplete() const;
    
protected:
    UFUNCTION()
    void LoadLinkedMenuData() const;
    
};

