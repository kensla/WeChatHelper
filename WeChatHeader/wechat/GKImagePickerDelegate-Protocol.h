//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKImagePicker, UIImage;

@protocol GKImagePickerDelegate <NSObject>

@optional
- (void)imagePicker:(GKImagePicker *)arg1 pickedImage:(UIImage *)arg2;
- (void)imagePickerDidCancel:(GKImagePicker *)arg1;
@end

