#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EGbxGlyphSetOption.h"
#include "EGraphicsMode.h"
#include "ESpeakerSetup.h"
#include "PlayerInputBindings.h"
#include "GbxProfile.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class GBXGAMESYSTEMCORE_API UGbxProfile : public USaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDisplayVehicleSpeedAsMPH;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableAimAssist;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bGamepadInvertLook;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bGamepadInvertTurn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bGamepadInvertMove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bGamepadInvertStrafe;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableMouseAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableGamepadInput;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseClassicGamepadInput;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableVibration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableTriggerFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EGbxGlyphSetOption GlyphMode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInvertMousePitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableMouseSmoothing;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MouseScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShowDamageNumbers;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShowDamageNumberIcons;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableTrainingMessages;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCenterCrosshair;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bToggleSprint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bToggleCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCensorContent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MasterVolume;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MusicVolume;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SoundEffectsVolume;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VOVolume;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VoiceVolume;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableOptionalVO;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPushToTalk;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableControllerAudio;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpeakerAngleFront;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpeakerAngleSide;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpeakerAngleBack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESpeakerSetup SpeakerSetup;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bMuteAudioOnFocusLoss;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableWindowsSpatialAudio;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EGraphicsMode GraphicsMode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, GlobalConfig)
    float BaseFOV;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseVehicleFOV;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHideStrictNATHelpDialog;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HudScaleMultiplier;
    
    UPROPERTY()
    FPlayerInputBindings PlayerInputBindings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShowTextChat;
    
    UPROPERTY()
    TArray<uint32> NewsHashes;
    
    UPROPERTY()
    uint32 LastUsedSavegameId;
    
public:
    UGbxProfile();
};

