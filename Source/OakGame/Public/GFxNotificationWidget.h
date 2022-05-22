#pragma once
#include "CoreMinimal.h"
#include "EGrenadeThrowFailureReason.h"
#include "GbxGFxHUDWidget.h"
#include "GFxNotificationQueueListItem.h"
#include "GFxNotificationWidget.generated.h"

class UHUDNotificationAsset;
class UGFxDisplayedNotificationWidget;

UCLASS()
class OAKGAME_API UGFxNotificationWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxWidgetDisplayTime;
    
private:
    UPROPERTY()
    TArray<FGFxNotificationQueueListItem> QueduedNotifications;
    
    UPROPERTY()
    FGFxNotificationQueueListItem ActiveNotification;
    
    UPROPERTY()
    FGFxNotificationQueueListItem CurrentError;
    
public:
    UGFxNotificationWidget();
    UFUNCTION()
    void OnWidgetHidden(const UGFxDisplayedNotificationWidget* Widget) const;
    
    UFUNCTION()
    void OnHUDErrorNotification(const FText& Reason) const;
    
    UFUNCTION()
    void OnGrenadeThrowFailed(EGrenadeThrowFailureReason FailureReason) const;
    
    UFUNCTION()
    void DisplayNotificationWithId(UHUDNotificationAsset* Asset, const uint8 NotificationId, const FText& MESSAGE, const int32 NotificationPriority, UClass* TrackedNotificationTarget, bool bMakeActiveImmediately, bool bAbortIfNotImmediatelyActive) const;
    
    UFUNCTION()
    void DisplayNotification(UHUDNotificationAsset* Asset, const FText& MESSAGE, const int32 NotificationPriority, UClass* TrackedNotificationTarget, bool bMakeActiveImmediately) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DisplayError(const FText& MESSAGE) const;
    
    UFUNCTION()
    void ClearNotifications() const;
    
};

