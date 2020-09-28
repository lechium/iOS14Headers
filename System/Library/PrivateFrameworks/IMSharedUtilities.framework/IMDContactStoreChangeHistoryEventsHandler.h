/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitor.h>

@class NSMutableDictionary, NSString;

@interface IMDContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor> {

	NSMutableDictionary* _aliasToCNIDMap;
	NSMutableDictionary* _CNIDToAliasesMap;

}

@property (nonatomic,retain) NSMutableDictionary * aliasToCNIDMap;                //@synthesize aliasToCNIDMap=_aliasToCNIDMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * CNIDToAliasesMap;              //@synthesize CNIDToAliasesMap=_CNIDToAliasesMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAliasToCNIDMap:(NSMutableDictionary *)arg1 ;
-(void)visitDropEverythingEvent:(id)arg1 ;
-(NSMutableDictionary *)CNIDToAliasesMap;
-(id)getAliasToCNIDMap;
-(id)initWithAliasToCNIDMap:(id)arg1 ;
-(id)generateCNIDToAliasesMapFrom:(id)arg1 ;
-(void)handleAddOrUpdateEventForCNContact:(id)arg1 ;
-(id)matchAliasesFromCacheForCNContact:(id)arg1 ;
-(void)setCNIDToAliasesMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)aliasToCNIDMap;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
@end
