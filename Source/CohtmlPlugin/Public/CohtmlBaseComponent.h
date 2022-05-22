#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CohtmlReadyForBindingsSignatureDelegate.h"
#include "CohtmlBindingsReleasedSignatureDelegate.h"
#include "CohtmlScriptingReadyDelegate.h"
#include "Engine/Texture.h"
#include "Sound/SoundAttenuation.h"
#include "CohtmlBaseComponent.generated.h"

class UTextureRenderTarget2D;
class UCohtmlAudioWrapper;
class UStructProperty;
class UObject;
class UCohtmlJSEvent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COHTMLPLUGIN_API UCohtmlBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCohtmlReadyForBindingsSignature ReadyForBindings;
    
    UPROPERTY(BlueprintAssignable)
    FCohtmlBindingsReleasedSignature BindingsReleased;
    
    UPROPERTY(BlueprintAssignable)
    FCohtmlScriptingReady ScriptingReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableComplexCSSSupport;
    
    UPROPERTY(BlueprintReadOnly)
    UTextureRenderTarget2D* Texture;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureFilter> Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReceiveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDelayedUpdate;
    
private:
    UPROPERTY(Transient)
    UCohtmlAudioWrapper* AudioWrapper;
    
public:
    UCohtmlBaseComponent();
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
    void Resize(int32 Width, int32 Height);
    
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
    
    UFUNCTION(BlueprintCallable)
    void EndDebugFrameSave();
    
    UFUNCTION(BlueprintCallable)
    void EnableRendering(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void EnableDelayedUpdate(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void DebugSaveNextFrame();
    
    UFUNCTION(BlueprintCallable)
    UCohtmlJSEvent* CreateJSEvent();
    
    UFUNCTION(BlueprintCallable)
    void CreateDataModelFromStruct(const FString& Name, const UStructProperty* Arg);
    
    UFUNCTION(BlueprintCallable)
    void CreateDataModelFromObject(const FString& Name, UObject* Model);
    
    UFUNCTION(BlueprintCallable)
    void BeginDebugFrameSave();
    
};

