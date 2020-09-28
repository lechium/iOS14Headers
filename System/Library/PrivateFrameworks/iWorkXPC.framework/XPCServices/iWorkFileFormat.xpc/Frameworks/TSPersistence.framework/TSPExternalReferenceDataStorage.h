/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPFileDataStorage.h>

@class NSURL, NSData, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {

	NSURL* _URL;
	NSData* _bookmarkData;
	TSPObjectContext* _context;

}

@property (getter=isReadable,nonatomic,readonly) BOOL readable; 
-(id)initWithURL:(id)arg1 ;
-(BOOL)isReadable;
-(id)storageForDataCopyFromOtherContext;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithBookmarkData:(id)arg1 context:(id)arg2 ;
-(id)bookmarkDataForArchiver:(id)arg1 ;
@end
