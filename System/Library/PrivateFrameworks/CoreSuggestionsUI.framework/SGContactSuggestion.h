/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestionsUI/SGContactSuggestionBase.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@protocol SGContactSuggestionDelegate;
@class NSString;

@interface SGContactSuggestion : SGContactSuggestionBase <CNContactViewControllerDelegate> {

	id<SGContactSuggestionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SGContactSuggestionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactImage;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(id)suggestionPrimaryAction;
-(id)suggestionImage;
-(void)setDelegate:(id<SGContactSuggestionDelegate>)arg1 ;
-(id<SGContactSuggestionDelegate>)delegate;
@end

