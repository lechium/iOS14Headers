/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManager/DOCFrecencyBasedEvent.h>

@class FPItem, NSString, NSNumber;

@interface DOCSmartFolderHit : DOCFrecencyBasedEvent {

	FPItem* _folderItem;
	unsigned long long _type;
	NSString* _value;
	NSNumber* _rowId;

}

@property (nonatomic,retain) NSNumber * rowId;                     //@synthesize rowId=_rowId - In the implementation block
@property (nonatomic,copy) FPItem * folderItem;                    //@synthesize folderItem=_folderItem - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * value;                       //@synthesize value=_value - In the implementation block
-(void)setValue:(NSString *)arg1 ;
-(void)setRowId:(NSNumber *)arg1 ;
-(unsigned long long)type;
-(NSNumber *)rowId;
-(NSString *)value;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithRowId:(id)arg1 folder:(id)arg2 type:(unsigned long long)arg3 value:(id)arg4 lastUsedDate:(id)arg5 frecency:(double)arg6 ;
-(id)initWithFolder:(id)arg1 type:(unsigned long long)arg2 value:(id)arg3 lastUsedDate:(id)arg4 frecency:(double)arg5 ;
-(FPItem *)folderItem;
-(void)setFolderItem:(FPItem *)arg1 ;
@end

