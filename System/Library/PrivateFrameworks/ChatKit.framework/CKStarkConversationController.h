/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPInterfaceControllerDelegate.h>

@class CPInterfaceController, CPListTemplate, NSDateFormatter, NSString;

@interface CKStarkConversationController : NSObject <CPInterfaceControllerDelegate> {

	CPInterfaceController* _interfaceController;
	CPListTemplate* _conversationListTemplate;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _timeFormatter;

}

@property (nonatomic,retain) CPInterfaceController * interfaceController;              //@synthesize interfaceController=_interfaceController - In the implementation block
@property (nonatomic,retain) CPListTemplate * conversationListTemplate;                //@synthesize conversationListTemplate=_conversationListTemplate - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                          //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * timeFormatter;                          //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDateFormatter *)dateFormatter;
-(NSDateFormatter *)timeFormatter;
-(void)setTimeFormatter:(NSDateFormatter *)arg1 ;
-(void)conversationListDidChange:(id)arg1 ;
-(void)_resortAndReloadData;
-(CPListTemplate *)conversationListTemplate;
-(void)templateWillAppear:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithInterfaceController:(id)arg1 ;
-(CPInterfaceController *)interfaceController;
-(void)setInterfaceController:(CPInterfaceController *)arg1 ;
-(void)setConversationListTemplate:(CPListTemplate *)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
@end

