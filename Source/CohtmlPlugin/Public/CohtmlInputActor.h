#pragma once
#include "CoreMinimal.h"
#include "CohtmlInputActorMouseButtonUpDelegate.h"
#include "GameFramework/Actor.h"
#include "ECohtmlInputWidgetLineTraceMode.h"
#include "CohtmlInputActorMouseButtonDownDelegate.h"
#include "CohtmlInputActorKeyDownDelegate.h"
#include "CohtmlInputActorKeyUpDelegate.h"
#include "ECohtmlInputPropagationBehaviour.h"
#include "Engine/EngineTypes.h"
#include "Engine/Texture.h"
#include "ECohtmlInputWidgetRaycastQuality.h"
#include "CohtmlInputActor.generated.h"

class UCohtmlBaseComponent;

UCLASS()
class COHTMLPLUGIN_API ACohtmlInputActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCohtmlInputActorMouseButtonDown OnCohtmlInputActorMouseButtonDown;
    
    UPROPERTY(BlueprintAssignable)
    FCohtmlInputActorMouseButtonUp OnCohtmlInputActorMouseButtonUp;
    
    UPROPERTY(BlueprintAssignable)
    FCohtmlInputActorKeyDown OnCohtmlInputActorKeyDown;
    
    UPROPERTY(BlueprintAssignable)
    FCohtmlInputActorKeyUp OnCohtmlInputActorKeyUp;
    
    ACohtmlInputActor();
    UFUNCTION(BlueprintCallable)
    void ToggleCohtmlInputFocus();
    
    UFUNCTION(BlueprintCallable)
    void SetLineTraceMode(TEnumAsByte<ECohtmlInputWidgetLineTraceMode> Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetInputPropagationBehaviour(TEnumAsByte<ECohtmlInputPropagationBehaviour::Type> Propagation);
    
    UFUNCTION(BlueprintCallable)
    void SetCohtmlViewFocus(UCohtmlBaseComponent* NewFocusedView);
    
    UFUNCTION(BlueprintCallable)
    void SetCohtmlInputFocus(bool FocusUI);
    
    UFUNCTION(BlueprintPure)
    bool IsCohtmlFocused() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<TextureAddress> AddressMode, TEnumAsByte<ECohtmlInputWidgetRaycastQuality> RaycastQuality, int32 UVChannel);
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ECohtmlInputPropagationBehaviour::Type> GetInputPropagationBehaviour() const;
    
    UFUNCTION(BlueprintCallable)
    void AlwaysAcceptMouseInput(bool bAccept);
    
};

