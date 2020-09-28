/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SGSuggestion.h>
#import <libobjc.A.dylib/SGSuggestionCategory.h>
#import <libobjc.A.dylib/SGSuggestionExtensions.h>

@protocol SGSuggestionDelegate;
@class SGRealtimeEvent, EKEvent, NSString;

@interface SGEventSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {

	SGRealtimeEvent* _realtimeEvent;
	EKEvent* _eventKitEvent;
	id<SGSuggestionDelegate> _suggestionDelegate;

}

@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate;              //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_eventStore;
+(id)calendarImage;
+(void)confirm:(BOOL)arg1 event:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)primaryActionTitle;
-(void)dealloc;
-(void)setSuggestionDelegate:(id<SGSuggestionDelegate>)arg1 ;
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(id)suggestionCategoryTitle;
-(id)suggestionTitle;
-(id)suggestionCategory;
-(id)suggestionPrimaryAction;
-(id)suggestionDismissAction;
-(id)suggestionSubtitle;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(id)suggestionCategoryTitleForItems:(id)arg1 ;
-(id)suggestionCategorySubtitleForItems:(id)arg1 ;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg1 ;
-(id)realtimeSuggestion;
-(id)initWithRealtimeEvent:(id)arg1 ;
-(id)suggestionsEvent;
-(void)eventKitStoreChangedNotification:(id)arg1 ;
-(id)eventKitEvent;
@end
