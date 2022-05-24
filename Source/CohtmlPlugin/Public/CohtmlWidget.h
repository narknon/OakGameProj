#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "CohtmlReadyForBindingsSignatureDelegate.h"
#include "CohtmlBindingsReleasedSignatureDelegate.h"
#include "Sound/SoundAttenuation.h"
#include "CohtmlScriptingReadyDelegate.h"
#include "ECohtmlInputPropagationBehaviour.h"
#include "Engine/Texture.h"
#include "CohtmlWidget.generated.h"

class UCohtmlAudioWrapper;
class AActor;
class UStructProperty;
class UObject;
class UCohtmlJSEvent;
class UTextureRenderTarget2D;

UCLASS()
class COHTMLPLUGIN_API UCohtmlWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* Owner;
    
    UPROPERTY(BlueprintAssignable)
    FCohtmlReadyForBindingsSignature ReadyForBindings;
    
    UPROPERTY(BlueprintAssignable)
    FCohtmlBindingsReleasedSignature BindingsReleased;
    
    UPROPERTY(BlueprintAssignable)
    FCohtmlScriptingReady ScriptingReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableComplexCSSSupport;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureFilter> Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReceiveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECohtmlInputPropagationBehaviour::Type> InputPropagationBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGammaCorrectedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TickPeriodInMinimizedGame;
    
private:
    UPROPERTY(Transient)
    UCohtmlAudioWrapper* AudioWrapper;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString URL;
    
    UCohtmlWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateWholeDataModelFromStruct(const UStructProperty* Struct) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateWholeDataModelFromObject(UObject* Model) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TriggerJSEvent(const FString& Name, UCohtmlJSEvent* EventData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SynchronizeModels() const;
    
    UFUNCTION(BlueprintCallable)
    void ShowPaintRects(bool show);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundAttenuation(const FSoundAttenuationSettings& Settings);
    
    UFUNCTION(BlueprintCallable)
    void SetInputPropagationBehaviour(TEnumAsByte<ECohtmlInputPropagationBehaviour::Type> Propagation);
    
    UFUNCTION(BlueprintCallable)
    void Reload();
    
    UFUNCTION(BlueprintCallable)
    void Load(const FString& Path);
    
    UFUNCTION(BlueprintPure)
    bool IsReadyToCreateView() const;
    
    UFUNCTION(BlueprintPure)
    bool IsReadyForBindings() const;
    
    UFUNCTION(BlueprintPure)
    bool HasRequestedView() const;
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetRenderTexture() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ECohtmlInputPropagationBehaviour::Type> GetInputPropagationBehaviour() const;
    
    UFUNCTION(BlueprintCallable)
    UCohtmlJSEvent* CreateJSEvent();
    
    UFUNCTION(BlueprintCallable)
    void CreateDataModelFromStruct(const FString& Name, const UStructProperty* Struct);
    
    UFUNCTION(BlueprintCallable)
    void CreateDataModelFromObject(const FString& Name, UObject* Model);
    
};

