#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "AIAspectSettings_MoveSpline.h"
#include "AIAspectSettings_Navigation.h"
#include "AIAction_MoveSpline.generated.h"

class UObject;
class AActor;

UCLASS(CollapseCategories, EditInlineNew)
class UAIAction_MoveSpline : public UAIAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_MoveSpline MoveSplineSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation NavSettings;
    
    UAIAction_MoveSpline();
    UFUNCTION(BlueprintCallable)
    static bool SetupMoveSpline(AActor* TargetActor, UObject* TargetSpline, float Offset, bool bIsReverse);
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeSplineOffset(AActor* TargetActor, float Offset);
    
};

