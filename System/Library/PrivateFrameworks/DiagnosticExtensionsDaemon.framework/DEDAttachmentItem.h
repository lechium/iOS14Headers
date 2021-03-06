/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class NSString, NSDate, NSNumber, NSURL;

@interface DEDAttachmentItem : NSObject <DEDSecureArchiving> {

	NSString* _deviceID;
	NSString* _displayName;
	NSDate* _modificationDate;
	NSNumber* _fileSize;
	NSURL* _attachedPath;

}

@property (retain) NSString * deviceID;                             //@synthesize deviceID=_deviceID - In the implementation block
@property (retain) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSDate * modificationDate;                       //@synthesize modificationDate=_modificationDate - In the implementation block
@property (retain) NSNumber * fileSize;                             //@synthesize fileSize=_fileSize - In the implementation block
@property (retain) NSURL * attachedPath;                            //@synthesize attachedPath=_attachedPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
+(id)itemWithDictionary:(id)arg1 ;
+(id)itemWithDEItem:(id)arg1 ;
+(id)itemWithURL:(id)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSNumber *)fileSize;
-(NSDate *)modificationDate;
-(id)serialize;
-(void)setDeviceID:(NSString *)arg1 ;
-(BOOL)isLocal;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setAttachedPath:(NSURL *)arg1 ;
-(NSURL *)attachedPath;
-(NSString *)deviceID;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSString *)description;
@end

