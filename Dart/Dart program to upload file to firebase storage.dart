import 'dart:io';

import 'package:firebase_storage/firebase_storage.dart';

class UploadFileToStorage{

  late Reference _storageReference;

  Future uploadFileToStorage(File imageFile, String destination) async {

    _storageReference = FirebaseStorage.instance
        .ref(destination)
        .child('${DateTime.now().millisecondsSinceEpoch}');
    UploadTask storageUploadTask = _storageReference.putFile(imageFile);
    var url = await (await storageUploadTask).ref.getDownloadURL();

    return url;
  }
}
