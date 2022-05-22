#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "AIBulletEvent.h"
#include "UObject/NoExportTypes.h"
#include "AISense_Bullet.generated.h"

class UObject;
class AActor;

UCLASS(Config=Game)
class GBXGAMESYSTEMCORE_API UAISense_Bullet : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FAIBulletEvent> BulletEvents;
    
public:
    UAISense_Bullet();
    UFUNCTION(BlueprintCallable)
    static void ReportBulletEvent(UObject* WorldContext, FVector StartLoc, FVector EndLoc, bool bFirstEvent, AActor* Instigator, float Strength);
    
};

