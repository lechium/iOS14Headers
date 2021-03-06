/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMapTable;

@interface SBAppClipOverlayCoordinator : NSObject {

	NSMutableSet* _overlayViewControllers;
	NSMapTable* _participantForViewController;

}
-(id)init;
-(id)overlayViewControllerForBundleIdentifier:(id)arg1 webClipIdentifier:(id)arg2 participant:(id)arg3 ;
-(void)participant:(id)arg1 didSurrenderViewController:(id)arg2 ;
-(id)_existingOverlayViewControllerForWebClipIdentifier:(id)arg1 ;
@end

