/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPPackageConverter.h>

@interface TSPDirectoryPackageConverter : TSPPackageConverter
-(BOOL)isValid;
-(BOOL)enumeratePackageEntriesWithZipArchive:(id)arg1 needsReadChannel:(BOOL)arg2 accessor:(/*^block*/id)arg3 ;
-(unsigned long long)progressTotalUnitCountWithZipArchive:(id)arg1 ;
-(BOOL)performAccessor:(/*^block*/id)arg1 filePathCharacterIndex:(unsigned long long)arg2 fileURL:(id)arg3 needsReadChannel:(BOOL)arg4 zipArchive:(id)arg5 error:(id*)arg6 ;
@end
