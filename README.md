# Standard Tibetan Word Segmenter
 I realized rather late that it would be difficult to show the segmenter in action, so I have
 included a set of example outputs. If you wish to run this on your own computer, you can
 either build it yourself or run the pre-compiled version (which I would probably
 recommend).

Precompiled:
 - Download the current release from this repository.
 - Download the corpus from https://zenodo.org/records/803268/files/WebCrawl.zip
 - Concatenate the constituent txt files (of the corpus) into a single "tokenized.txt" and move
 this into the folder titled 'datasets/input'.
 - Run the .exe.

Building:
 - Download the corpus from https://zenodo.org/records/803268/files/WebCrawl.zip
 - Concatenate the constituent txt files into a single "tokenized.txt" and move this into a
 folder titled 'datasets/input' within this directory.
 - For the time being, simply put an empty txt file called "nontokenized.txt" in the same
 folder.
 - Move the file 'bod_vectors.txt' from the 'resources' folder into the same folder,
 'datasets/input'.
 - Add the folder 'datasets/output'.
 - Build the project using cmake.
 - Say a few Hail Marys, perhaps.
 - Run the program.

However you end up running this, it will train the model and spit out files
to 'datasets/output'; these are its predictions on the test data.
