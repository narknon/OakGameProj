#pragma once
#include "CoreMinimal.h"
#include "EMantleUpCheckState.generated.h"

UENUM(BlueprintType)
enum class EMantleUpCheckState :  {
    Unknown,
    WallCheck_NoWall,
    WallCheck_TooFlat,
    WallCheck_InvalidHitComponent,
    HeadRoomCheck_BlockedAhead,
    HeadRoomCheck_BlockedAbove,
    StandingSpotCheck_Initial_Ahead_NoFloor,
    StandingSpotCheck_Initial_Ahead_InitiallyPenetrating,
    StandingSpotCheck_Initial_Ahead_InvalidHitComponent,
    StandingSpotCheck_Final_Ahead_NoFloor,
    StandingSpotCheck_Final_Ahead_InitiallyPenetrating,
    StandingSpotCheck_Final_Ahead_InvalidHitComponent,
    StandingSpotCheck_Final_Ahead_UnwalkableSlope,
    StandingSpotCheck_Final_Ahead_OutsideOfHeightTolerance,
    StandingSpotCheck_Final_Ahead_BlockedAtHead,
    StandingSpotCheck_Initial_Rotated_NoFloor,
    StandingSpotCheck_Initial_Rotated_InitiallyPenetrating,
    StandingSpotCheck_Initial_Rotated_InvalidHitComponent,
    StandingSpotCheck_Final_Rotated_NoFloor,
    StandingSpotCheck_Final_Rotated_InitiallyPenetrating,
    StandingSpotCheck_Final_Rotated_InvalidHitComponent,
    StandingSpotCheck_Final_Rotated_UnwalkableSlope,
    StandingSpotCheck_Final_Rotated_OutsideOfHeightTolerance,
    StandingSpotCheck_Final_Rotated_BlockedAtHead,
    Good,
};

