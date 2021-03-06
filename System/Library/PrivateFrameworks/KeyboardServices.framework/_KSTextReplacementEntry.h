/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeyboardServices/KeyboardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSData;

@interface _KSTextReplacementEntry : NSObject <NSSecureCoding, NSCopying> {

	BOOL _needsSaveToCloud;
	BOOL _wasDeleted;
	NSString* _phrase;
	NSString* _shortcut;
	NSDate* _timestamp;
	_KSTextReplacementEntry* _priorValue;
	NSData* _cloudData;
	NSString* _cloudID;

}

@property (nonatomic,retain) NSData * cloudData;                                //@synthesize cloudData=_cloudData - In the implementation block
@property (assign) BOOL needsSaveToCloud;                                       //@synthesize needsSaveToCloud=_needsSaveToCloud - In the implementation block
@property (assign) BOOL wasDeleted;                                             //@synthesize wasDeleted=_wasDeleted - In the implementation block
@property (nonatomic,copy) NSString * cloudID;                                  //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,copy) NSString * phrase;                                   //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * shortcut;                                 //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) _KSTextReplacementEntry * priorValue;              //@synthesize priorValue=_priorValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localEntryFromCloudEntry:(id)arg1 ;
-(id)shortcutForSorting;
-(void)setPhrase:(NSString *)arg1 ;
-(void)setWasDeleted:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)encryptedFields;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(id)uniqueRecordName;
-(BOOL)wasDeleted;
-(id)uniqueRecordNameVer0;
-(id)unEncryptedFields;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setCloudID:(NSString *)arg1 ;
-(_KSTextReplacementEntry *)priorValue;
-(void)setShortcut:(NSString *)arg1 ;
-(id)uniqueID;
-(id)init;
-(void)setCloudData:(NSData *)arg1 ;
-(NSString *)phrase;
-(void)setNeedsSaveToCloud:(BOOL)arg1 ;
-(BOOL)needsSaveToCloud;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortcut;
-(void)setPriorValue:(_KSTextReplacementEntry *)arg1 ;
-(NSData *)cloudData;
-(id)description;
-(NSString *)cloudID;
@end

