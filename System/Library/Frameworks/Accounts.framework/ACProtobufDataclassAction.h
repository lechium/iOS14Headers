/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ACProtobufDataclassAction : PBCodable <NSCopying> {

	NSMutableArray* _affectedContainers;
	int _type;
	NSString* _undoAlertMessage;
	NSString* _undoAlertTitle;
	BOOL _destructive;

}

@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL destructive;                                 //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,retain) NSMutableArray * affectedContainers;              //@synthesize affectedContainers=_affectedContainers - In the implementation block
@property (nonatomic,readonly) BOOL hasUndoAlertTitle; 
@property (nonatomic,retain) NSString * undoAlertTitle;                        //@synthesize undoAlertTitle=_undoAlertTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasUndoAlertMessage; 
@property (nonatomic,retain) NSString * undoAlertMessage;                      //@synthesize undoAlertMessage=_undoAlertMessage - In the implementation block
+(Class)affectedContainersType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)destructive;
-(id)affectedContainersAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasUndoAlertTitle;
-(NSString *)undoAlertTitle;
-(void)setUndoAlertMessage:(NSString *)arg1 ;
-(void)addAffectedContainers:(id)arg1 ;
-(void)setAffectedContainers:(NSMutableArray *)arg1 ;
-(void)setUndoAlertTitle:(NSString *)arg1 ;
-(NSMutableArray *)affectedContainers;
-(NSString *)undoAlertMessage;
-(BOOL)hasUndoAlertMessage;
-(unsigned long long)affectedContainersCount;
-(void)clearAffectedContainers;
-(void)mergeFrom:(id)arg1 ;
-(int)type;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setDestructive:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

