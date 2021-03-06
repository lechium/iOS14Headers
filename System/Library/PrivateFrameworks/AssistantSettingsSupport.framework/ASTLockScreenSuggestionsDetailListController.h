/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class ASTLockScreenSuggestionSpecifier, PSSpecifier, NSArray, ASTLockScreenSuggestionsGlobalController;

@interface ASTLockScreenSuggestionsDetailListController : PSListController {

	ASTLockScreenSuggestionSpecifier* _lockScreenSpecifier;
	PSSpecifier* _perAppGroup;
	NSArray* _perAppSpecifiers;
	ASTLockScreenSuggestionsGlobalController* _globalController;
	PSSpecifier* _globalSpecifier;

}
-(id)init;
-(id)specifiers;
-(void)_handleGlobalToggleChangeWithEnabled:(BOOL)arg1 ;
@end

