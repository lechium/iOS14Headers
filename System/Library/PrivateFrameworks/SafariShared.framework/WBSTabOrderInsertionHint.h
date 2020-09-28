/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSOrderedTab;
@interface WBSTabOrderInsertionHint : NSObject {

	id<WBSOrderedTab> _tabToInsertAfter;
	unsigned long long _insertionIndex;
	unsigned long long _relationType;

}

@property (nonatomic,readonly) id<WBSOrderedTab> tabToInsertAfter;              //@synthesize tabToInsertAfter=_tabToInsertAfter - In the implementation block
@property (nonatomic,readonly) unsigned long long insertionIndex;               //@synthesize insertionIndex=_insertionIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long relationType;                 //@synthesize relationType=_relationType - In the implementation block
-(unsigned long long)relationType;
-(id<WBSOrderedTab>)tabToInsertAfter;
-(id)initWithTabToInsertAfter:(id)arg1 insertionIndex:(unsigned long long)arg2 relation:(unsigned long long)arg3 ;
-(id)initWithTabToInsertAfter:(id)arg1 relation:(unsigned long long)arg2 ;
-(unsigned long long)insertionIndex;
@end
