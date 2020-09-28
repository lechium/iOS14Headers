/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InputContext/InputContext-Structs.h>
@class NSString;

@interface _ICTransientLexicon : NSObject {

	LXLexiconRef _lexicon;
	int _count;
	unsigned char _typeFlags;
	NSString* _name;
	unsigned long long _entryCount;

}

@property (nonatomic,readonly) unsigned char typeFlags;                    //@synthesize typeFlags=_typeFlags - In the implementation block
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long entryCount;              //@synthesize entryCount=_entryCount - In the implementation block
-(unsigned long long)entryCount;
-(id)getEntries;
-(void)removeAllEntries;
-(void)dealloc;
-(id)getEntryRefCount:(id)arg1 ;
-(BOOL)addEntry:(id)arg1 source:(unsigned char)arg2 type:(unsigned char)arg3 ;
-(LXLexiconRef)getLexiconImplementation;
-(id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2 ;
-(void)removeEntriesBySource:(unsigned char)arg1 ;
-(id)getSortKeyEquivalents:(id)arg1 ;
-(LXEntryRef)copyEntryForString:(id)arg1 ;
-(unsigned char)typeFlags;
-(BOOL)contains:(id)arg1 ;
-(id)getUsageCount:(id)arg1 ;
-(void)removeEntry:(id)arg1 source:(unsigned char)arg2 ;
-(NSString *)name;
@end
