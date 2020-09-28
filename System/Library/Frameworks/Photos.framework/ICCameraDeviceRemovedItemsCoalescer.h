/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSDate, NSMutableArray, PHImportDeviceSource;

@interface ICCameraDeviceRemovedItemsCoalescer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSDate* _lastNotify;
	NSMutableArray* _items;
	PHImportDeviceSource* _source;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}
-(id)initWithDevice:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)coalesceItems:(id)arg1 ;
@end
