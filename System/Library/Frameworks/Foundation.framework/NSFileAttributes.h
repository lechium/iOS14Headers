/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSMutableDictionary, NSDictionary;

@interface NSFileAttributes : NSDictionary {

	NSMutableDictionary* dict;
	stat statInfo;
	SCD_Struct_NS21 catInfo;
	NSDictionary* extendedAttrs;
	int fileProtectionClass;

}
+(id)attributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
+(id)_attributesAtURL:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4 ;
+(BOOL)_populateCatInfo:(SCD_Struct_NS22*)arg1 forURL:(id)arg2 statInfo:(stat*)arg3 error:(id*)arg4 ;
+(id)attributesWithStat:(stat*)arg1 ;
+(id)_attributesAtPath:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4 ;
-(unsigned long long)fileSize;
-(unsigned long long)fileGroupOwnerAccountNumber;
-(id)fileGroupOwnerAccountName;
-(unsigned long long)filePosixPermissions;
-(id)fileOwnerAccountName;
-(BOOL)isDirectory;
-(void)dealloc;
-(id)keyEnumerator;
-(id)fileType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)fileModificationDate;
-(long long)fileSystemNumber;
-(unsigned long long)hash;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)fileOwnerAccountNumber;
-(unsigned long long)fileSystemFileNumber;
@end

