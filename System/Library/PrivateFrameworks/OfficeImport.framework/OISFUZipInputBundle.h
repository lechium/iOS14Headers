/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUInputBundle.h>

@class OISFUZipArchive, NSString;

@interface OISFUZipInputBundle : NSObject <SFUInputBundle> {

	OISFUZipArchive* _zipArchive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)hasEntryWithName:(id)arg1 ;
-(id)inputStreamForEntry:(id)arg1 ;
-(id)bufferedInputStreamForEntry:(id)arg1 ;
-(long long)lengthOfEntry:(id)arg1 ;
-(void)copyEntry:(id)arg1 toFile:(id)arg2 ;
-(id)initWithZipArchive:(id)arg1 ;
-(unsigned)crc32ForEntry:(id)arg1 ;
@end

